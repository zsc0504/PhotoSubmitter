/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import <TProtocol.h>
#import <TApplicationException.h>
#import <TProtocolUtil.h>
#import <TProcessor.h>
#import <TObjective-C.h>


@interface EDAMLimitsConstants : NSObject {
}
+ (int32_t) EDAM_ATTRIBUTE_LEN_MIN;
+ (int32_t) EDAM_ATTRIBUTE_LEN_MAX;
+ (NSString *) EDAM_ATTRIBUTE_REGEX;
+ (int32_t) EDAM_ATTRIBUTE_LIST_MAX;
+ (int32_t) EDAM_ATTRIBUTE_MAP_MAX;
+ (int32_t) EDAM_GUID_LEN_MIN;
+ (int32_t) EDAM_GUID_LEN_MAX;
+ (NSString *) EDAM_GUID_REGEX;
+ (int32_t) EDAM_EMAIL_LEN_MIN;
+ (int32_t) EDAM_EMAIL_LEN_MAX;
+ (NSString *) EDAM_EMAIL_LOCAL_REGEX;
+ (NSString *) EDAM_EMAIL_DOMAIN_REGEX;
+ (NSString *) EDAM_EMAIL_REGEX;
+ (int32_t) EDAM_TIMEZONE_LEN_MIN;
+ (int32_t) EDAM_TIMEZONE_LEN_MAX;
+ (NSString *) EDAM_TIMEZONE_REGEX;
+ (int32_t) EDAM_MIME_LEN_MIN;
+ (int32_t) EDAM_MIME_LEN_MAX;
+ (NSString *) EDAM_MIME_REGEX;
+ (NSString *) EDAM_MIME_TYPE_GIF;
+ (NSString *) EDAM_MIME_TYPE_JPEG;
+ (NSString *) EDAM_MIME_TYPE_PNG;
+ (NSString *) EDAM_MIME_TYPE_WAV;
+ (NSString *) EDAM_MIME_TYPE_MP3;
+ (NSString *) EDAM_MIME_TYPE_AMR;
+ (NSString *) EDAM_MIME_TYPE_MP4_VIDEO;
+ (NSString *) EDAM_MIME_TYPE_INK;
+ (NSString *) EDAM_MIME_TYPE_PDF;
+ (NSString *) EDAM_MIME_TYPE_DEFAULT;
+ (NSMutableSet *) EDAM_MIME_TYPES;
+ (NSString *) EDAM_COMMERCE_SERVICE_GOOGLE;
+ (NSString *) EDAM_COMMERCE_SERVICE_PAYPAL;
+ (NSString *) EDAM_COMMERCE_SERVICE_GIFT;
+ (NSString *) EDAM_COMMERCE_SERVICE_TRIALPAY;
+ (NSString *) EDAM_COMMERCE_SERVICE_TRIAL;
+ (NSString *) EDAM_COMMERCE_SERVICE_GROUP;
+ (NSString *) EDAM_COMMERCE_SERVICE_CYBERSOURCE;
+ (NSString *) EDAM_COMMERCE_DEFAULT_CURRENCY_COUNTRY_CODE;
+ (int32_t) EDAM_SEARCH_QUERY_LEN_MIN;
+ (int32_t) EDAM_SEARCH_QUERY_LEN_MAX;
+ (NSString *) EDAM_SEARCH_QUERY_REGEX;
+ (int32_t) EDAM_HASH_LEN;
+ (int32_t) EDAM_USER_USERNAME_LEN_MIN;
+ (int32_t) EDAM_USER_USERNAME_LEN_MAX;
+ (NSString *) EDAM_USER_USERNAME_REGEX;
+ (int32_t) EDAM_USER_NAME_LEN_MIN;
+ (int32_t) EDAM_USER_NAME_LEN_MAX;
+ (NSString *) EDAM_USER_NAME_REGEX;
+ (int32_t) EDAM_TAG_NAME_LEN_MIN;
+ (int32_t) EDAM_TAG_NAME_LEN_MAX;
+ (NSString *) EDAM_TAG_NAME_REGEX;
+ (int32_t) EDAM_NOTE_TITLE_LEN_MIN;
+ (int32_t) EDAM_NOTE_TITLE_LEN_MAX;
+ (NSString *) EDAM_NOTE_TITLE_REGEX;
+ (int32_t) EDAM_NOTE_CONTENT_LEN_MIN;
+ (int32_t) EDAM_NOTE_CONTENT_LEN_MAX;
+ (int32_t) EDAM_APPLICATIONDATA_NAME_LEN_MIN;
+ (int32_t) EDAM_APPLICATIONDATA_NAME_LEN_MAX;
+ (int32_t) EDAM_APPLICATIONDATA_VALUE_LEN_MIN;
+ (int32_t) EDAM_APPLICATIONDATA_VALUE_LEN_MAX;
+ (int32_t) EDAM_APPLICATIONDATA_ENTRY_LEN_MAX;
+ (NSString *) EDAM_APPLICATIONDATA_NAME_REGEX;
+ (NSString *) EDAM_APPLICATIONDATA_VALUE_REGEX;
+ (int32_t) EDAM_NOTEBOOK_NAME_LEN_MIN;
+ (int32_t) EDAM_NOTEBOOK_NAME_LEN_MAX;
+ (NSString *) EDAM_NOTEBOOK_NAME_REGEX;
+ (int32_t) EDAM_NOTEBOOK_STACK_LEN_MIN;
+ (int32_t) EDAM_NOTEBOOK_STACK_LEN_MAX;
+ (NSString *) EDAM_NOTEBOOK_STACK_REGEX;
+ (int32_t) EDAM_PUBLISHING_URI_LEN_MIN;
+ (int32_t) EDAM_PUBLISHING_URI_LEN_MAX;
+ (NSString *) EDAM_PUBLISHING_URI_REGEX;
+ (NSMutableSet *) EDAM_PUBLISHING_URI_PROHIBITED;
+ (int32_t) EDAM_PUBLISHING_DESCRIPTION_LEN_MIN;
+ (int32_t) EDAM_PUBLISHING_DESCRIPTION_LEN_MAX;
+ (NSString *) EDAM_PUBLISHING_DESCRIPTION_REGEX;
+ (int32_t) EDAM_SAVED_SEARCH_NAME_LEN_MIN;
+ (int32_t) EDAM_SAVED_SEARCH_NAME_LEN_MAX;
+ (NSString *) EDAM_SAVED_SEARCH_NAME_REGEX;
+ (int32_t) EDAM_USER_PASSWORD_LEN_MIN;
+ (int32_t) EDAM_USER_PASSWORD_LEN_MAX;
+ (NSString *) EDAM_USER_PASSWORD_REGEX;
+ (int32_t) EDAM_NOTE_TAGS_MAX;
+ (int32_t) EDAM_NOTE_RESOURCES_MAX;
+ (int32_t) EDAM_USER_TAGS_MAX;
+ (int32_t) EDAM_USER_SAVED_SEARCHES_MAX;
+ (int32_t) EDAM_USER_NOTES_MAX;
+ (int32_t) EDAM_USER_NOTEBOOKS_MAX;
+ (int32_t) EDAM_USER_RECENT_MAILED_ADDRESSES_MAX;
+ (int32_t) EDAM_USER_MAIL_LIMIT_DAILY_FREE;
+ (int32_t) EDAM_USER_MAIL_LIMIT_DAILY_PREMIUM;
+ (int64_t) EDAM_USER_UPLOAD_LIMIT_FREE;
+ (int64_t) EDAM_USER_UPLOAD_LIMIT_PREMIUM;
+ (int32_t) EDAM_NOTE_SIZE_MAX_FREE;
+ (int32_t) EDAM_NOTE_SIZE_MAX_PREMIUM;
+ (int32_t) EDAM_RESOURCE_SIZE_MAX_FREE;
+ (int32_t) EDAM_RESOURCE_SIZE_MAX_PREMIUM;
+ (int32_t) EDAM_USER_LINKED_NOTEBOOK_MAX;
+ (int32_t) EDAM_NOTEBOOK_SHARED_NOTEBOOK_MAX;
+ (int32_t) EDAM_NOTE_CONTENT_CLASS_LEN_MIN;
+ (int32_t) EDAM_NOTE_CONTENT_CLASS_LEN_MAX;
+ (NSString *) EDAM_HELLO_APP_CONTENT_CLASS_PREFIX;
+ (NSString *) EDAM_FOOD_APP_CONTENT_CLASS_PREFIX;
+ (NSString *) EDAM_NOTE_CONTENT_CLASS_REGEX;
+ (NSString *) EDAM_CONTENT_CLASS_HELLO_ENCOUNTER;
+ (NSString *) EDAM_CONTENT_CLASS_HELLO_PROFILE;
+ (NSString *) EDAM_CONTENT_CLASS_FOOD_MEAL;
@end
