Elecash Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/liray-unendlich/Elecash.svg?branch=master)](https://travis-ci.org/liray-unendlich/Elecash)

Elecash is a cutting edge cryptocurrency, with many features not available in most other cryptocurrencies.
- Anonymized transactions using zerocoin technology
- 100% Proof of Stake 3.0 Consensus protocol, allowing very low transaction fees and energy expenditure, and staking rewards to all participants in the network
- Masternode technology used to secure the network and provide the above features, each Masternode is secured
  with collateral of 10K ELC
- Decentralized blockchain voting utilizing Masternode technology to form a DAO. The blockchain will distribute monthly treasury funds based on successful proposals submitted by the community and voted on by the DAO.

10M ELC were mined 1-20000 blocks.

Since then, the Elecash repository has been rebaselined to show the fork relationship properly.

## Coin Specs ##
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>265,000,000</td></tr>
</table>

## PoS Rewards Breakdown ##
<table>
<th>Block Height</th><th>Reward</th><th>Miners</th><th>Stakers</th><th>Masternode</th><th>Governance</th>
<tr><td><= 9,999</td><td>150 ELC</td><td>50 ELC</td><td>75 ELC</td><td>25 ELC</td><td>0 ELC</td></tr>
<tr><td>10,000-43,199</td><td>150 ELC</td><td>0 ELC</td><td>100 ELC</td><td>50 ELC</td><td>0 ELC</td></tr>
<tr><td>43,200-129,599</td><td>140 ELC</td><td>0 ELC</td><td>100 ELC</td><td>40 ELC</td><td>0 ELC</td></tr>
<tr><td>129,600-215,999</td><td>130 ELC</td><td>0 ELC</td><td>85 ELC</td><td>35 ELC</td><td>10 ELC</td></tr>
<tr><td>216,000-345,599</td><td>120 ELC</td><td>0 ELC</td><td>75 ELC</td><td>35 ELC</td><td>10 ELC</td></tr>
<tr><td>129,600-215,999</td><td>110 ELC</td><td>0 ELC</td><td>70 ELC</td><td>30 ELC</td><td>10 ELC</td></tr>
<tr><td>129,600-215,999</td><td>105 ELC</td><td>0 ELC</td><td>65 ELC</td><td>30 ELC</td><td>10 ELC</td></tr>
<tr><td>129,600-215,999</td><td>95 ELC</td><td>0 ELC</td><td>60 ELC</td><td>30 ELC</td><td>5 ELC</td></tr>
<tr><td>129,600-215,999</td><td>90 ELC</td><td>0 ELC</td><td>55 ELC</td><td>30 ELC</td><td>5 ELC</td></tr>
<tr><td>129,600-215,999</td><td>80 ELC</td><td>0 ELC</td><td>50 ELC</td><td>25 ELC</td><td>5 ELC</td></tr>
</table>

Governance means "Elecash development budget", paid out based on approved proposals as voted on by the Elecash masternode owners through the community governance process.
