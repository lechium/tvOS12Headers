/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKitUI/WatchListKitUI-Structs.h>
@class TVTextElement;

@interface WLKUITextViewElementRenderer : NSObject {

	TVTextElement* _element;
	CGSize _size;

}

@property (nonatomic,retain) TVTextElement * element;              //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) CGSize size;                          //@synthesize size=_size - In the implementation block
-(void)setElement:(TVTextElement *)arg1 ;
-(void)drawElementInRect:(CGRect)arg1 ;
-(TVTextElement *)element;
-(id)initWithElement:(id)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(CGSize)textSize;
@end

