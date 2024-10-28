// User.js
import React from 'react';

const User = ({ name, age }) => {
  return (
    <div>
      <h2>Nom: {name}</h2>
      <p>Âge: {age} ans</p>
    </div>
  );
};

export default User;