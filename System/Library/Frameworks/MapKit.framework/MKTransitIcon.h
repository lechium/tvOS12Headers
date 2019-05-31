/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitIconDataSource.h>

@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource> {

	unsigned _cartoID;
	unsigned _defaultTransitType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,readonly) unsigned cartoID;                         //@synthesize cartoID=_cartoID - In the implementation block
@property (nonatomic,readonly) unsigned defaultTransitType;              //@synthesize defaultTransitType=_defaultTransitType - In the implementation block
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
-(long long)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(id)initWithCartoId:(unsigned)arg1 defaultTransitType:(unsigned)arg2 ;
@end
