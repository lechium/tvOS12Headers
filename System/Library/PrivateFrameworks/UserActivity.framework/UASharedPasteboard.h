/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject {

	UASharedPasteboardManager* _manager;

}

@property (assign) UASharedPasteboardManager * manager;              //@synthesize manager=_manager - In the implementation block
+(void)clearLocalPasteboardInformation;
+(void)startPreventingPasteboardSharing;
+(void)stopPreventingPasteboardSharing;
+(void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3 ;
+(void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2 ;
+(void)localPasteboardDidPasteGeneration:(unsigned long long)arg1 ;
+(id)remotePasteboard;
+(void)initialize;
-(void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)returnPasteboardDataBeforeArchives;
-(void)prefetchRemotePasteboardTypes:(id)arg1 ;
-(UASharedPasteboardManager *)manager;
-(void)setManager:(UASharedPasteboardManager *)arg1 ;
@end
