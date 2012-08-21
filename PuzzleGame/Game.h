//
//  Game.h
//  PuzzleGame
//
//  Created by Roberto Capelo on 21/08/12.
//  Copyright 2012 Voice Technology. All rights reserved.
//

#import "cocos2d.h"
#import "Peca.h"

@interface Game : CCLayer {
    Peca *peca;
}
+(CCScene *) scene;
-(void)montaTabuleiro:(CGSize) size;

@end