/*
 * Name        : test
 * Description : autocomp-lite testing program
 * Version     : v0.1
 * 
 * Author      : Ferry Boender  <f.boender@electricmonk.nl>
 * Copyright   : (C) 2004, Ferry Boender
 * License     : General Public License. For more information and terms, see
 *               the COPYING file in this archive.
 *
 * Dependencies: autocomp
 * Revisions   : v0.1 [FB] -
 * Remarks     : -
 * Todo        : -
 */
#include "autocomp.h"

/* Test-stub */
int main (int argc, char *argv[]) {
	char *complete_qry = NULL;
	GList *matches = NULL;

	/* Arguments check */
	if (argc != 2) {
		/* Automatic test-stub */
		printf ("Test case: completion_qry = 'ac'\n");
		complete_qry = strdup("ac");
		matches = ac_list_get (complete_qry);
		ac_list_print (matches, complete_qry);
		matches = ac_list_free (matches);
		free (complete_qry);
		
		printf ("Test case: completion_qry = '/et'\n");
		complete_qry = strdup("/et");
		matches = ac_list_get (complete_qry);
		ac_list_print (matches, complete_qry);
		matches = ac_list_free (matches);
		free (complete_qry);
		
		printf ("Test case: completion_qry = '../'\n");
		complete_qry = strdup("../");
		matches = ac_list_get (complete_qry);
		ac_list_print (matches, complete_qry);
		matches = ac_list_free (matches);
		free (complete_qry);
	} else {
		/* Test-stub with commandline arguments */
		printf ("Test case: completion_qry = '%s'\n", argv[1]);
		matches = ac_list_get (argv[1]);
		ac_list_print (matches, argv[1]);
		matches = ac_list_free (matches);
	}
	
	return (0);
}

