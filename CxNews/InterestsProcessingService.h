//
//  InterestsProcessingService.h
//  CxNews
//
//  Created by Anver Bogatov on 12.08.16.
//  Copyright © 2016 Anver Bogatov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InterestModel.h"

@interface InterestsProcessingService : NSObject

+(NSArray<InterestModel *> *)processInterestsTree:(NSArray<InterestModel *> *)plainInterestsArray;

@end
