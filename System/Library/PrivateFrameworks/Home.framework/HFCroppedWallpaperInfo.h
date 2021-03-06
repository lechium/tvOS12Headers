/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HFCroppedWallpaperInfo : NSObject <NSCopying> {

	long long _source;
	double _scale;
	CGPoint _center;

}

@property (nonatomic,readonly) long long source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) CGPoint center;                //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) double scale;                  //@synthesize scale=_scale - In the implementation block
-(id)initWithSource:(long long)arg1 center:(CGPoint)arg2 scale:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)scale;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)center;
-(long long)source;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

