/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IKAppPlaylistBridge;


@protocol IKAppPlaylist
@property (readonly) unsigned long long count; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
@property (nonatomic,readonly) IKAppPlaylistBridge * bridge; 
@optional
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1;
-(IKAppPlaylistBridge *)bridge;
-(long long)endAction;
-(void)setEndAction:(long long)arg1;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1;
-(id)objectsAtIndexes:(id)arg1;
-(void)removeObjectsAtIndexes:(id)arg1;

@end

