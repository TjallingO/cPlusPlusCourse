template <typename outputT, typename whateverT>
outputT as(whateverT input)
{
  return static_cast<outputT>(input);
};
