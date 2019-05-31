/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libboringssl.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_boringssl_ctx_callback.h>

@class NSString;

@interface boringssl_concrete_boringssl_ctx_callback : NSObject <OS_boringssl_ctx_callback> {

	unsigned short callback_type;
	/*^block*/id add_callback;
	/*^block*/id free_callback;
	/*^block*/id parse_callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@end

