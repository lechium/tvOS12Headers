/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaItem.h>

@interface OKMediaResourceItem : OKMediaItem
+(id)urlForMediaObject:(id)arg1 ;
+(id)scheme;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(id)initWithFilename:(id)arg1 andExtension:(id)arg2 ;
@end

