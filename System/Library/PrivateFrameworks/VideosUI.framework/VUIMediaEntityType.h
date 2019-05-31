/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIMediaEntityType : NSObject <NSCopying> {

	BOOL _rental;
	unsigned long long _subtype;
	unsigned long long _mediaCategoryType;
	unsigned long long _mediaCollectionType;

}

@property (assign,nonatomic) unsigned long long subtype;                          //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;                //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCollectionType;              //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
@property (assign,getter=isRental,nonatomic) BOOL rental;                         //@synthesize rental=_rental - In the implementation block
+(id)movie;
+(id)episode;
+(id)season;
+(id)show;
+(id)movieRental;
+(id)homeVideo;
-(void)setRental:(BOOL)arg1 ;
-(BOOL)isRental;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)subtype;
-(void)setSubtype:(unsigned long long)arg1 ;
-(unsigned long long)mediaCategoryType;
-(id)_initWithMediaItemCategoryType:(unsigned long long)arg1 isRental:(BOOL)arg2 ;
-(id)_initWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(unsigned long long)mediaCollectionType;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(void)setMediaCollectionType:(unsigned long long)arg1 ;
@end

