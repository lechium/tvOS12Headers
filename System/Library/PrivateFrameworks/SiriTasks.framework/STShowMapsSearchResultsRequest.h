/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriLocation, NSString, NSDate;

@interface STShowMapsSearchResultsRequest : AFSiriRequest {

	STSiriLocation* _searchResults;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;

}
+(BOOL)supportsSecureCoding;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)createResponse;
-(id)searchResults;
-(id)_initWithLocation:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

