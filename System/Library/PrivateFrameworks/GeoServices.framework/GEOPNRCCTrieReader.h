/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSData;

@interface GEOPNRCCTrieReader : NSObject {

	CFBurstTrieRef _trie;
	NSData* _ccFile;

}
-(id)initWithFile:(id)arg1 ;
-(id)lookupCCForPhNumber:(id)arg1 ;
-(void)dealloc;
@end

