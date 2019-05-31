/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLCloudChangeEventsResult.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface PLCloudChangeHubEventsResult : NSObject <PLCloudChangeEventsResult> {

	NSObject*<OS_xpc_object> _events;
	long long _resultType;
	unsigned long long _changeHubEventIndex;

}

@property (readonly) long long resultType;                                 //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long changeHubEventIndex;               //@synthesize changeHubEventIndex=_changeHubEventIndex - In the implementation block
@property (copy,readonly) NSString * currentTokenDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)resultType;
-(NSString *)currentTokenDescription;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1 ;
-(id)localEventFromEvent:(id)arg1 ;
-(id)initWithUnsuccessfulResultType:(long long)arg1 ;
-(id)initWithResultType:(long long)arg1 events:(id)arg2 changeHubEventIndex:(unsigned long long)arg3 ;
-(id)initWithSuccesfulEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2 ;
-(unsigned long long)changeHubEventIndex;
-(void)dealloc;
@end

