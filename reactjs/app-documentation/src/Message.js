// Message.js
import React from 'react';
import Button from './Button';

class Message extends React.Component {
  render() {
    return (
      <div>
        <h2>{this.props.text}</h2>
        <Button onClick={this.props.onButtonClick} label="Changer le message" />
      </div>
    );
  }
}

export default Message;