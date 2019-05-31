/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPhoneNumberResolving.h>

@class GEOPNRReadersCache, NSString;

@interface GEOPhoneNumberResolverLocalProxy : NSObject <GEOPhoneNumberResolving> {

	GEOPNRReadersCache* _readersCache;

}

@property (nonatomic,retain,readonly) GEOPNRReadersCache * readersCache;              //@synthesize readersCache=_readersCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3 ;
-(id)resolvedStringForCC:(id)arg1 inCountry:(id)arg2 locationIndex:(unsigned)arg3 error:(id*)arg4 ;
-(id)resolveUnknownFormatPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3 ;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(GEOPNRReadersCache *)readersCache;
-(id)init;
@end

