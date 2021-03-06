/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GEOSQLiteVirtualTable : NSObject {

	NSString* _name;

}

@property (readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (readonly) sqlite3_module* module; 
@property (readonly) NSString * columnDefinitions; 
@property (readonly) unsigned long long rowCount; 
-(sqlite3_module*)module;
-(NSString *)columnDefinitions;
-(void)fetchValueForContext:(sqlite3_contextRef)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3 ;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)rowCount;
@end

