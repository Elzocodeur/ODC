import { NgFor } from '@angular/common';
import { Component,Output, EventEmitter } from '@angular/core';
import { FormsModule } from '@angular/forms';
import { Router } from '@angular/router';

@Component({
  selector: 'app-verificationcode',
  standalone: true,
  imports: [NgFor,FormsModule],
  templateUrl: './verificationcode.component.html',
  styleUrls: ['./verificationcode.component.css']
})
export class VerificationCodeComponent {
  // digits: number[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0];
  // enteredCode: string = '';

  // constructor(private router: Router) {}

  // addDigit(digit: number) {
  //   if (this.enteredCode.length < 4) {
  //     this.enteredCode += digit;
  //     if (this.enteredCode.length === 4) {
  //       this.router.navigate(['/secret']);
  //     }
  //   }
  // }



  // deleteDigit() {
  //   this.enteredCode = this.enteredCode.slice(0, -1);
  // }

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
