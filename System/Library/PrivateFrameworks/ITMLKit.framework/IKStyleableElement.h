/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKViewElementStyleComposer;


@protocol IKStyleableElement <NSObject>
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement; 
@property (nonatomic,copy,readonly) NSString * elementName; 
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer; 
@required
-(id<IKStyleableElement>)parentStyleableElement;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(id)arg1;
-(NSString *)elementName;
-(id)objectForKeyedSubscript:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
