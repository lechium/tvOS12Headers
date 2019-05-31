/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKArtworkImageSource.h>

@protocol GEOTransitArtworkDataSource;
@class MKArtworkDataSourceCache, NSString;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource> {

	id<GEOTransitArtworkDataSource> _artwork;
	long long _shieldSize;
	MKArtworkDataSourceCache* _artworkCache;

}

@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long shieldSize;                                 //@synthesize shieldSize=_shieldSize - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache;                //@synthesize artworkCache=_artworkCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GEOTransitArtworkDataSource>)artwork;
-(MKArtworkDataSourceCache *)artworkCache;
-(long long)shieldSize;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(id)badgeImageToDisplayWithScreenScale:(double)arg1 ;
-(id)imageToDisplayWithScreenScale:(double)arg1 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 ;
-(id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3 ;
-(BOOL)isEqualToTransitArtworkViewMode:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
