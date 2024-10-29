import { NgFor } from '@angular/common';
import { Component, Output, EventEmitter } from '@angular/core';
import { FormsModule } from '@angular/forms';
import { Router } from '@angular/router';

@Component({
  selector: 'app-login',
  standalone: true,
  imports: [NgFor, FormsModule],
  templateUrl: './login.component.html',
  styleUrls: ['./login.component.css'],
})
export class LoginComponent {
  @Output() loginEvent = new EventEmitter<void>();

  pinInputs: number[] = [1, 2, 3, 4];
  phoneNumber: string = '';
  enteredPin: string[] = ['', '', '', ''];

  constructor(private router: Router) {}

  moveToNext(event: KeyboardEvent) {
    const input = event.target as HTMLInputElement;
    if (event.key === 'Backspace' && !input.value) {
      const previousInput = input.previousElementSibling as HTMLInputElement;
      if (previousInput) previousInput.focus();
      return;
    }

    if (input.value && /^\d$/.test(input.value)) {
      const nextInput = input.nextElementSibling as HTMLInputElement;
      if (nextInput) nextInput.focus();
    }
  }

  handleLogin(event: Event) {
    event.preventDefault();
    const phoneNumberCorrect = this.phoneNumber === '776795849';
    const pinCorrect = this.enteredPin.join('') === '1234';

    if (phoneNumberCorrect && pinCorrect) {
      this.loginEvent.emit();
    } else {
      alert("Veuillez entrer un numéro de téléphone valide et un code PIN à 4 chiffres.");
    }
  }

  showSignup() {
    this.router.navigate(['/signup']);
  }
}
