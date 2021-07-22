// Copyright (c) Microsoft Corporation
// SPDX-License-Identifier: MIT
#pragma once

// The values in this file are taken from
// https://tools.ietf.org/html/draft-ietf-teep-protocol

#ifdef TEEP_ENABLE_JSON
#define TEEP_JSON_MEDIA_TYPE "application/teep+json" /* obsolete */
#endif
#define TEEP_CBOR_MEDIA_TYPE "application/teep+cbor"

typedef enum {
    TEEP_MESSAGE_QUERY_REQUEST = 1,
    TEEP_MESSAGE_QUERY_RESPONSE = 2,
    TEEP_MESSAGE_UPDATE = 3,
    TEEP_MESSAGE_SUCCESS = 5,
    TEEP_MESSAGE_ERROR = 6,
} teep_message_type_t;

typedef enum {
    TEEP_ERR_SUCCESS = 0,
    TEEP_ERR_PERMANENT_ERROR = 1,
    TEEP_ERR_UNSUPPORTED_EXTENSION = 2,
    TEEP_ERR_UNSUPPORTED_FRESHNESS_MECHANISM = 3,
    TEEP_ERR_UNSUPPORTED_MSG_VERSION = 4,
    TEEP_ERR_UNSUPPORTED_CRYPTO_ALG = 5,
    TEEP_ERR_BAD_CERTIFICATE = 6,
    TEEP_ERR_CERTIFICATE_EXPIRED = 9,
    TEEP_ERR_TEMPORARY_ERROR = 10,
    TEEP_ERR_MANIFEST_PROCESSING_FAILED = 17
} teep_error_code_t;

typedef enum {
    TEEP_ATTESTATION = 1,
    TEEP_TRUSTED_COMPONENTS = 2,
    TEEP_EXTENSIONS = 4,
    TEEP_SUIT_COMMANDS = 8
} teep_data_items_t;

typedef enum {
    TEEP_LABEL_SUPPORTED_CIPHER_SUITES = 1,
    TEEP_LABEL_CHALLENGE = 2,
    TEEP_LABEL_VERSIONS = 3,
    TEEP_LABEL_OCSP_DATA = 4,
    TEEP_LABEL_SELECTED_CIPHER_SUITE = 5,
    TEEP_LABEL_SELECTED_VERSION = 6,
    TEEP_LABEL_EVIDENCE = 7,
    TEEP_LABEL_TC_LIST = 8,
    TEEP_LABEL_EXT_LIST = 9,
    TEEP_LABEL_MANIFEST_LIST = 10,
    TEEP_LABEL_MSG = 11,
    TEEP_LABEL_ERR_MSG = 12,
    TEEP_LABEL_EVIDENCE_FORMAT = 13,
    TEEP_LABEL_REQUESTED_TC_LIST = 14,
    TEEP_LABEL_UNNEEDED_TC_LIST = 15,
    TEEP_LABEL_COMPONENT_ID = 16,
    TEEP_LABEL_TC_MANIFEST_SEQUENCE_NUMBER = 17,
    TEEP_LABEL_HAVE_BINARY = 18,
    TEEP_LABEL_SUIT_REPORTS = 19,
    TEEP_LABEL_TOKEN = 20,
    TEEP_LABEL_SUPPORTED_FRESHNESS_MECHANISMS = 21,
} teep_label_t;

typedef enum {
    TEEP_CIPHERSUITE_EDDSA = 1,
    TEEP_CIPHERSUITE_ES256 = 2
} teep_ciphersuite_t;

typedef enum {
    TEEP_FRESHNESS_MECHANISM_NONCE = 1,
    TEEP_FRESHNESS_MECHANISM_TIMESTAMP = 2,
    TEEP_FRESHNESS_MECHANISM_EPOCH_ID = 3,
} teep_freshness_mechanism_t;