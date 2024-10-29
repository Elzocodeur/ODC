import axios from "axios";

// Create an axios instance with default headers
const apiBase = axios.create({
  baseURL: import.meta.env.VITE_API_URL,
  headers: {
    "Content-Type": "application/json",
  },
});

// Interceptor to dynamically add the token to requests
apiBase.interceptors.request.use(
  (config) => {
    const token = localStorage.getItem("token"); // Get the latest token from localStorage
    if (token) {
      config.headers.Authorization = `Bearer ${token}`; // Add token to Authorization header
    }
    return config;
  },
  (error) => {
    return Promise.reject(error);
  }
);

export default apiBase;
