/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateFont : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * size; 
@property (nonatomic,copy) NSString * textStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fontWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)font;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(NSString *)textStyle;
-(void)setTextStyle:(NSString *)arg1 ;
@end

