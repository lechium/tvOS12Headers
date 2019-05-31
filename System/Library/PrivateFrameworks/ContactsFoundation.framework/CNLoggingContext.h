/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString, NSObject;

@interface CNLoggingContext : NSObject {

	NSString* _subsystem;
	NSString* _category;
	void* _aslClient;
	NSObject*<OS_dispatch_queue> _aslQueue;

}

@property (nonatomic,copy,readonly) NSString * category;               //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * subsystem;              //@synthesize subsystem=_subsystem - In the implementation block
+(id)loggingContextWithSubsystem:(id)arg1 category:(id)arg2 ;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(void)setupASL;
-(id)loggingName;
-(asl_object_sRef)aslClient;
-(id)aslQueue;
-(NSString *)subsystem;
-(void)dealloc;
-(NSString *)category;
@end

