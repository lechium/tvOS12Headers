/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, NSArray;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
@property (nonatomic,readonly) NSArray * contentItems; 
-(NSArray *)contentItems;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(unsigned long long)type;
@end

