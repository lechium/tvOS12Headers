/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SATextDecorationRegion : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * length; 
@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) NSNumber * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textDecorationRegion;
+(id)textDecorationRegionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setProperty:(NSString *)arg1 ;
-(NSString *)property;
-(NSNumber *)length;
-(NSNumber *)start;
-(void)setLength:(NSNumber *)arg1 ;
-(void)setStart:(NSNumber *)arg1 ;
@end
