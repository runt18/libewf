/*
 * Date and time values functions
 *
 * Copyright (c) 2006-2010, Joachim Metz <jbmetz@users.sourceforge.net>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEWF_DATE_TIME_VALUES_H )
#define _LIBEWF_DATE_TIME_VALUES_H

#include <common.h>
#include <types.h>

#include <liberror.h>

#if defined( TIME_WITH_SYS_TIME )
#include <sys/time.h>
#include <time.h>
#elif defined( HAVE_SYS_TIME_H )
#include <sys/time.h>
#else
#include <time.h>
#endif

#if defined( __cplusplus )
extern "C" {
#endif

int libewf_date_time_values_copy_from_timestamp(
     uint8_t *date_time_values_string,
     size_t date_time_values_string_size,
     time_t timestamp,
     liberror_error_t **error );

int libewf_date_time_values_copy_to_timestamp(
     const uint8_t *date_time_values_string,
     size_t date_time_values_string_length,
     time_t *timestamp,
     liberror_error_t **error );

int libewf_utf8_string_day_of_week_copy_from_time_elements(
     uint8_t *utf8_string,
     size_t utf8_string_size,
     size_t *utf8_string_index,
     struct tm *time_elements,
     liberror_error_t **error );

int libewf_utf8_string_month_copy_from_time_elements(
     uint8_t *utf8_string,
     size_t utf8_string_size,
     size_t *utf8_string_index,
     struct tm *time_elements,
     liberror_error_t **error );

int libewf_utf8_string_time_copy_from_time_elements(
     uint8_t *utf8_string,
     size_t utf8_string_size,
     size_t *utf8_string_index,
     struct tm *time_elements,
     liberror_error_t **error );

int libewf_utf16_string_day_of_week_copy_from_time_elements(
     uint16_t *utf16_string,
     size_t utf16_string_size,
     size_t *utf16_string_index,
     struct tm *time_elements,
     liberror_error_t **error );

int libewf_utf16_string_month_copy_from_time_elements(
     uint16_t *utf16_string,
     size_t utf16_string_size,
     size_t *utf16_string_index,
     struct tm *time_elements,
     liberror_error_t **error );

int libewf_utf16_string_time_copy_from_time_elements(
     uint16_t *utf16_string,
     size_t utf16_string_size,
     size_t *utf16_string_index,
     struct tm *time_elements,
     liberror_error_t **error );

int libewf_date_time_values_copy_to_utf8_string(
     const uint8_t *date_time_values_string,
     size_t date_time_values_string_length,
     int date_format,
     uint8_t *utf8_string,
     size_t utf8_string_size,
     liberror_error_t **error );

int libewf_date_time_values_copy_to_utf16_string(
     const uint8_t *date_time_values_string,
     size_t date_time_values_string_length,
     int date_format,
     uint16_t *utf16_string,
     size_t utf16_string_size,
     liberror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

