/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIDataCollectionSearchSession : NSObject {

	BOOL _pendingResults;
	BOOL _pendingSuggestionsResults;

}

@property (assign,nonatomic) BOOL pendingResults;                         //@synthesize pendingResults=_pendingResults - In the implementation block
@property (assign,nonatomic) BOOL pendingSuggestionsResults;              //@synthesize pendingSuggestionsResults=_pendingSuggestionsResults - In the implementation block
+(id)currentSession;
+(void)begin;
+(void)end;
-(void)searchStringDidChange;
-(void)didSelectResultSuggested:(BOOL)arg1 ;
-(void)setPendingResults:(BOOL)arg1 ;
-(void)setPendingSuggestionsResults:(BOOL)arg1 ;
-(BOOL)pendingResults;
-(BOOL)pendingSuggestionsResults;
-(void)didFetchResultSuggested:(BOOL)arg1 ;
@end

