/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, EKDirectorySearchQuery, NSError;

@interface EKDirectorySearchOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	NSString* _accountID;
	EKDirectorySearchQuery* _query;
	/*^block*/id _resultsBlock;
	id _searchID;
	BOOL _numberOfMatchesExceededLimit;
	NSError* _error;

}

@property (assign,nonatomic) BOOL numberOfMatchesExceededLimit;              //@synthesize numberOfMatchesExceededLimit=_numberOfMatchesExceededLimit - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
-(id)_recordTypes;
-(void)_finishWithError:(id)arg1 ;
-(void)_processResults:(id)arg1 ;
-(void)setNumberOfMatchesExceededLimit:(BOOL)arg1 ;
-(id)_processGroupsInResults:(id)arg1 ;
-(id)_processLocationsInResults:(id)arg1 ;
-(id)_processResourcesInResults:(id)arg1 ;
-(id)_processPeopleInResults:(id)arg1 ;
-(id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(/*^block*/id)arg3 ;
-(BOOL)numberOfMatchesExceededLimit;
-(BOOL)isConcurrent;
-(id)init;
-(void)cancel;
-(void)start;
-(void)main;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end
