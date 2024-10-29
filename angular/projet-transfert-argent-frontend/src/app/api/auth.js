import apiBase from "./apiBase";

const loginApi = async (data) => {
  try {
    const response = await apiBase.post("/login", data);
    return response.data;
  } catch (error) {
    console.error(
      "Erreur lors de la connexion:",
      error.response ? error.response.data : error.message
    );
    return error.response
      ? error.response.data
      : { message: "Erreur inconnue", status: "KO" };
  }
};

export { loginApi};
