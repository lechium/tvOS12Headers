/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMRange;

@interface WKDOMTextIterator : NSObject {

	unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >* _textIterator;
	Vector<unsigned short, 0, WTF::CrashOnOverflow, 16>* _upconvertedText;

}

@property (readonly) BOOL atEnd; 
@property (readonly) WKDOMRange * currentRange; 
@property (readonly) unsigned long long currentTextLength; 
@property (readonly) const unsigned short* currentTextPointer; 
-(id)initWithRange:(id)arg1 ;
-(void)advance;
-(BOOL)atEnd;
-(WKDOMRange *)currentRange;
-(const unsigned short*)currentTextPointer;
-(unsigned long long)currentTextLength;
@end

