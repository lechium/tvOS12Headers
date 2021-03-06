/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface _MLNLPSentenceClassifierModel : NSObject <MLCustomModel> {

	void* _sentenceClassifierModel;
	MLModelDescription* _modelDescription;

}

@property (retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
@end

