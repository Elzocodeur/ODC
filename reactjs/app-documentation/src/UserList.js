// UserList.js
import React from 'react';
import User from './User';

const UserList = ({ users }) => {
  return (
    <div>
      <h1>Liste des utilisateurs</h1>
      {users.map((user, index) => (
        <User key={index} name={user.name} age={user.age} />
      ))}
    </div>
  );
};

export default UserList;