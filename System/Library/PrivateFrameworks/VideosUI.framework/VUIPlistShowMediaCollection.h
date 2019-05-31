/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaCollection.h>
#import <libobjc.A.dylib/VUIPlistMediaEntityImageLoadParamsCreating.h>

@class VUIPlistMediaDatabaseShow;

@interface VUIPlistShowMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating> {

	VUIPlistMediaDatabaseShow* _databaseShow;

}

@property (nonatomic,retain) VUIPlistMediaDatabaseShow * databaseShow;              //@synthesize databaseShow=_databaseShow - In the implementation block
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 databaseShow:(id)arg2 requestedProperties:(id)arg3 ;
-(id)mediaItemCount;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)coverArtImageIdentifier;
-(id)playedState;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(VUIPlistMediaDatabaseShow *)databaseShow;
-(void)setDatabaseShow:(VUIPlistMediaDatabaseShow *)arg1 ;
@end
