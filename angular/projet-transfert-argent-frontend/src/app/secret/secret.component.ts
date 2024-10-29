// secret.component.ts
import { NgFor } from '@angular/common';
import { Component, Output, EventEmitter } from '@angular/core';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-secret',
  standalone: true,
  imports: [NgFor, FormsModule],
  templateUrl: './secret.component.html',
  styleUrls: ['./secret.component.css']
})
export class SecretComponent {
  @Output() codeEntered = new EventEmitter<void>();

  enteredCode: string = '';
  digits: string[] = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0'];

  addDigit(digit: string): void {
    if (this.enteredCode.length < 4) {
      this.enteredCode += digit;
    }
    if (this.enteredCode.length === 4) {
      this.codeEntered.emit();
    }
  }

  deleteDigit(): void {
    this.enteredCode = this.enteredCode.slice(0, -1);
  }
}
