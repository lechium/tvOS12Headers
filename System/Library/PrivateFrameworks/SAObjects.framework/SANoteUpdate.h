/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand

@property (nonatomic,copy) NSString * contentsToAppend; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)updateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)update;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)contentsToAppend;
-(void)setContentsToAppend:(NSString *)arg1 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
@end
