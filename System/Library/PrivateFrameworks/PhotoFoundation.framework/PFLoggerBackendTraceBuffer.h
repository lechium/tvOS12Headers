/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSDictionary;

@interface PFLoggerBackendTraceBuffer : PFLoggerBackendAdapter {

	NSDictionary* _traceBuffers;

}

@property (retain) NSDictionary * traceBuffers;              //@synthesize traceBuffers=_traceBuffers - In the implementation block
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(void)setTraceBuffers:(NSDictionary *)arg1 ;
-(NSDictionary *)traceBuffers;
-(id)init;
@end

