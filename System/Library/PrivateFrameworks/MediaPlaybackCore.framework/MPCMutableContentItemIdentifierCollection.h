/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCContentItemIdentifierCollection.h>

@interface MPCMutableContentItemIdentifierCollection : MPCContentItemIdentifierCollection

@property (assign,nonatomic) unsigned long long itemType; 
-(void)setItemType:(unsigned long long)arg1 ;
-(void)setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
