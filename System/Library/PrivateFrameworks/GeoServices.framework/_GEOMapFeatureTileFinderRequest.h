/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapFeatureAccessRequest.h>

@class GEOMapFeatureTileFinder, NSString;

@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest> {

	GEOMapFeatureTileFinder* _tileFinder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTileFinder:(id)arg1 ;
-(void)cancel;
@end

