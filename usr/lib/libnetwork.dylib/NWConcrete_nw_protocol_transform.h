/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_protocol_transform.h>

@protocol OS_nw_endpoint, OS_xpc_object, OS_nw_protocol_stack;
@class NSObject, NSString;

@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform> {

	unsigned clear_application : 1;
	unsigned clear_transport : 1;
	unsigned clear_internet : 1;
	unsigned no_proxy : 1;
	unsigned prohibit_direct : 1;
	unsigned tfo : 1;
	unsigned tfo_no_cookie : 1;
	unsigned no_fallback : 1;
	unsigned use_tfo_heuristics : 1;
	int fallback_mode;
	int multipath_service;
	int data_mode;
	NSObject*<OS_nw_endpoint> replace_endpoint;
	NSObject*<OS_xpc_object> disabled_protocols;
	NSObject*<OS_nw_protocol_stack> transform_stack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

