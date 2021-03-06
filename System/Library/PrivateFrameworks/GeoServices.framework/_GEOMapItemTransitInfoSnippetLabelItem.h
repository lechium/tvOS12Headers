/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLabelItem.h>

@protocol GEOTransitArtworkDataSource;
@class NSString;

@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject <GEOTransitLabelItem> {

	unsigned long long _type;
	NSString* _labelString;
	id<GEOTransitArtworkDataSource> _labelArtwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * labelString;                                    //@synthesize labelString=_labelString - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork;              //@synthesize labelArtwork=_labelArtwork - In the implementation block
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(id)initWithType:(unsigned long long)arg1 labelString:(id)arg2 labelArtwork:(id)arg3 ;
-(unsigned long long)type;
@end

