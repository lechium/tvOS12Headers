/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRTextEditingAttributes.h>

@class NSString;

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * prompt; 
@property (assign,nonatomic) MRTextInputTraits inputTraits; 
-(void)setInputTraits:(MRTextInputTraits)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
@end
