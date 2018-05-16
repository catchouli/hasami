#pragma once

#include "scenegraph.hpp"

class GlobeNode
  : public ModelNode
{
public:
  virtual void draw(const Shader& shader, const glm::mat4& projection, const glm::mat4& view) override;

private:
  void generate(const glm::vec3& center);
  void subdivide(const glm::vec3& a, const glm::vec3& b, const glm::vec3& c, const glm::vec3& center, float size = 1.0f);
  void generateGlobe(const glm::vec3& center);

  std::vector<Vertex> m_vert;
};