/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSURL;

@interface SAFmfVisibilityView : SAUISnippet

@property (nonatomic,copy) NSURL * searchContext; 
@property (assign,nonatomic) BOOL visible; 
+(id)visibilityView;
+(id)visibilityViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(id)encodedClassName;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
@end

