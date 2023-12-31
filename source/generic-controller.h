/*
 * MIT License
 *
 * Copyright (c) 2023 Grzegorz Grzęda
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef GENERIC_CONTROLLER_H
#define GENERIC_CONTROLLER_H

#include <stddef.h>
#include <stdint.h>

typedef struct generic_controller generic_controller_t;

typedef void (*generic_controller_handler_t)(const generic_controller_t* controller);
typedef void (*generic_controller_transaction_handler_t)(const generic_controller_t* controller,
                                                         const uint8_t* buffer,
                                                         size_t size);

typedef struct generic_controller {
    void* context;
    generic_controller_handler_t reset;
    generic_controller_handler_t destroy;
    generic_controller_transaction_handler_t send_command;
    generic_controller_transaction_handler_t send_data;
} generic_controller_t;

#endif  // GENERIC_CONTROLLER_H