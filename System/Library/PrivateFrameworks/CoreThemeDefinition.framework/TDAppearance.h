/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDAppearance : NSManagedObject {

	NSString* _name;
	unsigned short _identifier;

}

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) unsigned short identifier; 
-(unsigned short)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(unsigned short)arg1 ;
@end
