/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSArray;

@interface WLKArtworkVariantListing : NSObject {

	NSArray* _artworkVariants;

}

@property (nonatomic,copy,readonly) NSArray * artworkVariants;              //@synthesize artworkVariants=_artworkVariants - In the implementation block
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)bestArtworkVariantForSize:(CGSize)arg1 ;
-(NSArray *)artworkVariants;
-(id)bestArtworkVariantOfType:(long long)arg1 forSize:(CGSize)arg2 ;
@end
