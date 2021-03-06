/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDRetainedSearchMetadata, NSString;

@interface GEORetainedSearchMetadata : NSObject <NSCopying> {

	GEOPDRetainedSearchMetadata* _retainedSearchMetadata;

}

@property (getter=_query,nonatomic,readonly) NSString * query; 
-(id)_query;
-(id)_retainedSearchMetadata;
-(id)initWithRetainedSearchMetadata:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

