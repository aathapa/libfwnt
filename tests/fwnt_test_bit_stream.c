/*
 * Library bit_stream type test program
 *
 * Copyright (C) 2009-2019, Joachim Metz <joachim.metz@gmail.com>
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

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "fwnt_test_libcerror.h"
#include "fwnt_test_libfwnt.h"
#include "fwnt_test_macros.h"
#include "fwnt_test_memory.h"
#include "fwnt_test_unused.h"

#include "../libfwnt/libfwnt_bit_stream.h"

#if defined( __GNUC__ ) && !defined( LIBFWNT_DLL_IMPORT )

/* Tests the libfwnt_bit_stream_free function
 * Returns 1 if successful or 0 if not
 */
int fwnt_test_bit_stream_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libfwnt_bit_stream_free(
	          NULL,
	          &error );

	FWNT_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

	FWNT_TEST_ASSERT_IS_NOT_NULL(
	 "error",
	 error );

	libcerror_error_free(
	 &error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	return( 0 );
}

#endif /* defined( __GNUC__ ) && !defined( LIBFWNT_DLL_IMPORT ) */

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FWNT_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FWNT_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FWNT_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FWNT_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FWNT_TEST_UNREFERENCED_PARAMETER( argc )
	FWNT_TEST_UNREFERENCED_PARAMETER( argv )

#if defined( __GNUC__ ) && !defined( LIBFWNT_DLL_IMPORT )

	/* TODO: add tests for libfwnt_bit_stream_initialize */

	FWNT_TEST_RUN(
	 "libfwnt_bit_stream_free",
	 fwnt_test_bit_stream_free );

	/* TODO: add tests for libfwnt_bit_stream_read */

#endif /* defined( __GNUC__ ) && !defined( LIBFWNT_DLL_IMPORT ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

