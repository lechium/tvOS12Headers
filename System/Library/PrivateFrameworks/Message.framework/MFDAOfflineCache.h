/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCache.h>

@class NSString;

@interface MFDAOfflineCache : MFOfflineCache {

	NSString* _lastSelectedFolderID;

}
-(void)deferOperation:(id)arg1 ;
-(void)setLastSelectedMailbox:(id)arg1 ;
-(BOOL)replayOperationsUsingBlock:(/*^block*/id)arg1 ;
-(void)deleteOfflineCacheData;
-(void)dealloc;
@end

