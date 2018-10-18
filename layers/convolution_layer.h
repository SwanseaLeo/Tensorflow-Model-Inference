#ifndef CONVOLUTION_LAYER_H
#define CONVOLUTION_LAYER_H

#include <QVector>
#include "layer.h"

class Convolution_Layer : public Layer
{
private:
    short m_InputHeight;
    short m_InputWidth;
    short m_InputDepth;
    short m_FilterHeight;
    short m_FilterWidth;
    short m_HorizontalStride;
    short m_VerticalStride;
    short m_NumFilters;

    QVector<arma::cube> m_Filters;
    arma::vec m_Biases;

public:
    Convolution_Layer(const QString &name,
            short inputHeight,
            short inputWidth);

    void Forward(arma::cube &input, arma::cube &output) override;
    void Initialize_Weights(const QStringList &text) override;
    void Initialize_Biases(const QStringList &text) override;

};

#endif // CONVOLUTION_LAYER_H
